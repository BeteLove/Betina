* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

body {
    font-family: Arial, sans-serif;
    line-height: 1.6;
    background-color: #f4f4f9;
}

header {
    background: #333;
    color: #fff;
    padding: 1rem 0;
    text-align: center;
}

.menu {
    display: flex;
    justify-content: center;
    list-style: none;
    margin-bottom: 1rem;
}

.menu li {
    margin: 0 20px;
}

.menu a {
    color: #fff;
    text-decoration: none;
    font-weight: bold;
}

.content {
    padding: 20px;
    max-width: 800px;
    margin: 20px auto;
}

section {
    margin-bottom: 20px;
    background: #fff;
    padding: 20px;
    border-radius: 8px;
    box-shadow: 0 2px 5px rgba(0,0,0,0.1);
}

.flex-container {
    display: flex;
    flex-direction: column;
}

footer {
    text-align: center;
    padding: 1rem;
    background: #333;
    color: #fff;
    position: relative;
    bottom: 0;
    width: 100%;
}

/* Responsividade */
@media (min-width: 768px) {
    .flex-container {
        flex-direction: row;
        justify-content: space-between;
    }

    section {
        flex: 1;
        margin: 10px;
    }
}
